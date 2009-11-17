/*
 * Copyright (c) 2004-2009 XMLVM --- An XML-based Programming Language
 * 
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any later
 * version.
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 * 
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 675 Mass
 * Ave, Cambridge, MA 02139, USA.
 * 
 * For more information, visit the XMLVM Home Page at http://www.xmlvm.org
 */

package android.view;

import java.util.ArrayList;
import java.util.List;
import java.util.Map;

import org.xmlvm.iphone.CGRect;

import android.app.Activity;
import android.content.Context;
import android.internal.Assert;
import android.util.AttributeSet;

/**
 * iPhone implementation of Android's ViewGroup class.
 * 
 * @see http://developer.android.com/reference/android/view/ViewGroup.html
 */
public class ViewGroup extends View implements ViewParent {

    private List<View>         subViews;
    private Map<Integer, View> xmlvmViewMap;

    public static class LayoutParams {
        public static final int FILL_PARENT  = -1;
        public static final int WRAP_CONTENT = -2;

        public int              width;
        public int              height;

        public LayoutParams(Context context, AttributeSet attrs) {
            width = sizeFromString(attrs.getAttributeValue(null, "layout_width"), 0);
            height = sizeFromString(attrs.getAttributeValue(null, "layout_height"), 0);
        }

        public LayoutParams(int width, int height) {
            this.width = width;
            this.height = height;
        }

        private int sizeFromString(String str, int defaultValue) {
            if (str == null || str.length() == 0) {
                return defaultValue;
            } else if (str.equalsIgnoreCase("wrap_content")) {
                return WRAP_CONTENT;
            } else if (str.equalsIgnoreCase("fill_parent")) {
                return FILL_PARENT;
            } else {
                return Integer.parseInt(str);
            }
        }
    }

    public static class MarginLayoutParams extends LayoutParams {

        public int bottomMargin;
        public int leftMargin;
        public int rightMargin;
        public int topMargin;

        public MarginLayoutParams(Context context, AttributeSet attrs) {
            super(context, attrs);

            bottomMargin = resolveDimension(attrs.getAttributeValue(null, "layout_marginBottom"));
            leftMargin = resolveDimension(attrs.getAttributeValue(null, "layout_marginLeft"));
            rightMargin = resolveDimension(attrs.getAttributeValue(null, "layout_marginRight"));
            topMargin = resolveDimension(attrs.getAttributeValue(null, "layout_marginTop"));
        }

        public MarginLayoutParams(int width, int height) {
            super(width, height);
        }

        private int resolveDimension(String dimension) {
            // A missing dimension is interpreted as 0 pixel
            if (dimension == null || dimension.length() == 0) {
                return 0;
            }

            if (dimension.length() > 2 && dimension.endsWith("px")) {
                return Integer.parseInt(dimension.substring(0, dimension.length() - 2));
            }

            Assert.FAIL("layout dimension not supported: " + dimension);
            return 0;
        }
    }

    public ViewGroup(Context c) {
        super(c);
        this.subViews = new ArrayList<View>();

        CGRect rect = ((Activity) c).getWindow().getCGRect();
        this.xmlvmGetUIView().setFrame(rect);
    }

    public ViewGroup(Context c, AttributeSet attrs) {
        this(c);
        parseAttributes(attrs);
    }

    public void addView(View child) {
        subViews.add(child);
        child.xmlvmSetParent(this);
        xmlvmGetUIView().addSubview(child.xmlvmGetUIView());
    }

    public void addView(View child, LayoutParams p) {
        this.addView(child);
        child.setLayoutParams(p);
    }

    public void addView(View child, int idx) {
        subViews.add(idx, child);
        child.xmlvmSetParent(this);
        xmlvmGetUIView().insertSubview(child.xmlvmGetUIView(), idx);
    }

    public void removeView(View child) {
        subViews.remove(child);
        child.xmlvmSetParent(null);
        child.xmlvmGetUIView().removeFromSuperview();
    }

    public void removeAllViews() {
        while (subViews.size() > 0) {
            View view = subViews.get(0);
            removeView(view);
        }
    }

    public ViewGroup.LayoutParams generateLayoutParams(AttributeSet attrs) {
        return new LayoutParams(getContext(), attrs);
    }

    protected void parseAttributes(AttributeSet attrs) {
        super.parseAttributes(attrs);
    }

    public View findViewById(int id) {
        return xmlvmViewMap.get(new Integer(id));
    }

    public Map<Integer, View> getXmlvmViewMap() {
        return xmlvmViewMap;
    }

    public void setXmlvmViewMap(Map<Integer, View> xmlvmViewMap) {
        this.xmlvmViewMap = xmlvmViewMap;
    }

}

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

package org.xmlvm.iphone;

public class UITableViewCell extends UIView {

    protected boolean selected = false;
    private UIView    accessoryView;

    public UITableViewCell() {
        this(UITableViewCellStyle.Default, null);
    }

    public UITableViewCell(int uiTableViewCellStyle, String reuseIdentifier) {
        super(new CGRect(0, 0, 0, 0));
        setBackgroundColor(UIColor.clearColor);
        accessoryView = null;
    }

    public void setSelected(boolean sel) {
        selected = sel;
    }

    public boolean isSelected() {
        return selected;
    }

    public int getEditingStyle() {
        return UITableViewCellEditingStyle.None;
    }

    public UIView getContentView() {
        return this;
    }

    public void setBackgroundView(UIView backgroundView) {
        // TODO : Java implementation
    }

    public UIView getBackgroundView() {
        // TODO : Java implementation
        return null;
    }

    public void setSelectedBackgroundView(UIView selectedBackgroundView) {
        // TODO : Java implementation
    }

    public UIView getSelectedBackgroundView() {
        // TODO : Java implementation
        return null;
    }

    public UILabel getTextLabel() {
        // TODO : Java implementation
        return null;
    }

    public UILabel getDetailTextLabel() {
        // TODO : Java implementation
        return null;
    }

    public UIImageView getImageView() {
        // TODO : Java implementation
        return null;
    }

    public UIView getAccessoryView() {
        return accessoryView;
    }

    public void setAccessoryView(UIView accessoryView) {
        this.accessoryView = accessoryView;
    }

}
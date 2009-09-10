#import "org_xmlvm_iphone_UIImage.h"


// UIImage
//----------------------------------------------------------------------------
@implementation UIImage(cat_org_xmlvm_iphone_UIImage);

+ (org_xmlvm_iphone_UIImage*) imageAtPath___java_lang_String :(NSString*)n1
{
	org_xmlvm_iphone_UIImage *toRet = [UIImage imageNamed:n1];
	return toRet;
}

- (org_xmlvm_iphone_CGSize*) getSize
{
    org_xmlvm_iphone_CGSize* s = [[org_xmlvm_iphone_CGSize alloc] init];
    s->width = [self size].width;
    s->height = [self size].height;
    return s;
}

- (void) draw1PartImageInRect___org_xmlvm_iphone_CGRect: (org_xmlvm_iphone_CGRect*) rect
{
    CGRect r = [rect getCGRect];
    [self drawInRect: r];
}

- (void) draw___int_int :(int)x :(int)y
{
	CGPoint p = CGPointMake(x,y);
	p.x = x;
	p.y = y;
	[self drawAtPoint: p];
}

- (org_xmlvm_iphone_CGImage*) getCoreImage
{
	org_xmlvm_iphone_CGImage* retval = [[org_xmlvm_iphone_CGImage alloc] init];
	retval->image = [self CGImage];

	return retval;
}

@end

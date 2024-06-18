@interface UICTFontDescriptor : UIFontDescriptor

+ (id)fontDescriptorWithName:(id)a0 matrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
+ (id)fontDescriptorWithFontAttributes:(id)a0;
+ (id)fontDescriptorWithName:(id)a0 size:(double)a1;

- (id)fontDescriptorByAddingAttributes:(id)a0;
- (unsigned long long)_cfTypeID;
- (oneway void)release;
- (id)objectForKey:(id)a0;
- (unsigned long long)hash;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (BOOL)isEqual:(id)a0;
- (id)matchingFontDescriptorsWithMandatoryKeys:(id)a0;
- (unsigned long long)retainCount;
- (id)matchingFontDescriptorWithMandatoryKeys:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (id)fontAttributes;

@end

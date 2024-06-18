@class NSArray, NSString;

@interface IFIconSpecification : NSObject

@property (readonly) NSArray *imageSpecifications;
@property (readonly) NSString *name;
@property (readonly) struct CGSize { double width; double height; } maxSize;
@property (readonly) struct CGSize { double width; double height; } minSize;
@property (readonly) double maxScale;
@property (readonly) double minScale;
@property (readonly) NSArray *allImageSpecifications;
@property (readonly) NSArray *variants;
@property (readonly) NSArray *allVariants;

+ (id)iosDocumentIconSpecification;
+ (id)macosDocumentIconSpecification;
+ (id)iosDocumentGlyphSpecification;
+ (id)macosIconSpecification;
+ (id)iosMessagesAppIconSpecification;
+ (id)watchAppIconSpecification;
+ (id)macosTemplateIconSpecification;
+ (id)iosAppIconSpecification;
+ (id)defaultIconSpecification;

- (id)init;
- (id)imageSpecificationForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)_initWithName:(id)a0 imageSpecifiactions:(id)a1 variants:(id)a2;
- (void).cxx_destruct;
- (id)description;
- (id)imageSpecificationsWithTags:(id)a0 withoutTags:(id)a1;
- (id)imageSpecificationsMatchingPredicate:(id)a0;

@end

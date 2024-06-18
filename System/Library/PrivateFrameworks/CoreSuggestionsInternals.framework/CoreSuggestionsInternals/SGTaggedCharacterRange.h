@class NSArray, NSString;

@interface SGTaggedCharacterRange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long annotationType;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) NSString *text;

+ (id)annotationTypeUniqueIdentifier:(unsigned long long)a0;
+ (unsigned long long)annotationTypeFromString:(id)a0;
+ (id)biosBasedAnnotation:(id)a0 usingTags:(id)a1 forSection:(id)a2;
+ (id)describeAnnotationType:(unsigned long long)a0;
+ (id)enrichAndFilterTaggedCharacterRanges:(id)a0 usingMapping:(id)a1 withAnnotationType:(unsigned long long)a2;
+ (id)flattenTaggedCharacterRanges:(id)a0 usingWhitelist:(id)a1 replaceOOVWithToken:(id)a2;
+ (id)mergeTaggedCharacterRanges:(id)a0 usingBaseTaggedCharacterRanges:(id)a1 extraTags:(id)a2 tagOverrides:(id)a3 alignWithGroundTruth:(id)a4;
+ (id)mergeTagsFromTaggedCharacterRanges:(id)a0 withTaggedCharacterRanges:(id)a1;
+ (id)state:(id)a0 index:(int)a1 section:(id)a2;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDict:(id)a0;
- (id)dictRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)annotationTypeUniqueIdentifier;
- (id)initWithAnnotationType:(unsigned long long)a0 tags:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 text:(id)a3;
- (BOOL)isEqualToTaggedCharacterRange:(id)a0;

@end
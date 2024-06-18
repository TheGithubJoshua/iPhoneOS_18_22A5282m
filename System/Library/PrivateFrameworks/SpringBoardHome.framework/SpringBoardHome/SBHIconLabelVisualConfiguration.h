@class NSString;

@interface SBHIconLabelVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>

@property (nonatomic) double fontSize;
@property (nonatomic) double baselineOffsetFromImage;
@property (nonatomic) double height;
@property (nonatomic) double extraWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;

@end

@class NSString;

@interface MPModelGroup : MPModelObject

@property (copy, nonatomic) NSString *title;

+ (id)kind;
+ (long long)genericObjectType;
+ (id)__title_KEY;

- (id)humanDescription;

@end

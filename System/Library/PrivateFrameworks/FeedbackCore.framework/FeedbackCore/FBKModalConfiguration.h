@class NSString, NSArray, FBKQuestion;

@interface FBKModalConfiguration : FBKManagedFeedbackObject

@property (nonatomic) long long typeEnum;
@property (nonatomic) long long sortOrder;
@property (copy, nonatomic) NSString *iconName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) FBKQuestion *question;
@property (retain, nonatomic) NSArray *choices;
@property (readonly, nonatomic) unsigned long long type;

+ (id)fetchRequest;
+ (id)entityName;

- (void)setPropertiesFromJSONObject:(id)a0;

@end

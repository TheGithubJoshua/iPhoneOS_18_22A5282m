@class NSArray, NSString;

@interface SAAnswerAnswerPropertyGroup : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *answerProperties;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)answerPropertyGroupWithDictionary:(id)a0 context:(id)a1;
+ (id)answerPropertyGroup;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

@class NSURL, NSString;

@interface SASportsNewsItem : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *link;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newsItemWithDictionary:(id)a0 context:(id)a1;
+ (id)newsItem;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

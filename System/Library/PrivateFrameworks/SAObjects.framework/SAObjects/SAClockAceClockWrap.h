@class NSNumber, NSURL, NSString;

@interface SAClockAceClockWrap : SAClockObject <SASyncWrap>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *generation;
@property (copy, nonatomic) NSURL *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aceClockWrapWithDictionary:(id)a0 context:(id)a1;
+ (id)aceClockWrap;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

@class NSString;

@interface SASAbortSpeechRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *reason;

+ (id)abortSpeechRequestWithDictionary:(id)a0 context:(id)a1;
+ (id)abortSpeechRequest;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

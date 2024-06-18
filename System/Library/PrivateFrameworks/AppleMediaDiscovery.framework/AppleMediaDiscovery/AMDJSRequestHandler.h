@interface AMDJSRequestHandler : NSObject

+ (id)handlePayload:(id)a0 error:(id *)a1;
+ (void)wrapUp;
+ (long long)getActionCode:(id)a0;

@end

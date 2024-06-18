@interface HLPCommonDefines : NSObject

+ (BOOL)isInternalBuild;
+ (id)userName;
+ (id)clientID;
+ (void)setAuthenticationContext:(id)a0;
+ (id)assetRequestHeaderFields;
+ (id)assetServiceTicket;
+ (id)contentRequestHeaderFields;
+ (id)contentServiceTicket;
+ (BOOL)hasServiceTicket;

@end

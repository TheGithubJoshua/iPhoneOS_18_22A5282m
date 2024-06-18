@interface DMFFetchSafariBookmarksRequest : DMFTaskRequest

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)allowlistedClassForResultObject;

@end

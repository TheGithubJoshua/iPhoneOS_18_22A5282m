@interface GEOFilePathsPrivate : NSObject

+ (id)systemContainerCachesPathUsingLibSystem;
+ (id)daemonContainerPathUsingLibSystem;
+ (id)userContainerCachesPathUsingLibSystem;
+ (id)pathForSearchPath:(int)a0 andDomain:(int)a1;
+ (id)userContainerLibPathUsingLibSystem;
+ (id)daemonContainerCachesPathUsingLibSystem;
+ (id)systemContainerPathUsingLibSystem;
+ (id)daemonContainerLibraryPathUsingLibSystem;
+ (id)systemContainerLibraryPathUsingLibSystem;

@end

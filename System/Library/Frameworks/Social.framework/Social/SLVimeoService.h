@interface SLVimeoService : SLService

- (id)serviceType;
- (id)activityTitle;
- (id)accountTypeIdentifier;
- (id)activityImage;
- (long long)maximumURLCount;
- (long long)authenticationStyle;
- (BOOL)isFirstClassService;
- (long long)maximumImageCount;
- (long long)maximumVideoCount;
- (long long)maximumVideoDataSize;
- (long long)maximumVideoTimeLimit;

@end

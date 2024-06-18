@class NSString;

@interface ISSetApplicationBadgeOperation : ISOperation

@property (retain) NSString *badgeValue;
@property (retain) NSString *bundleIdentifier;

- (id)uniqueKey;
- (void).cxx_destruct;
- (void)run;

@end

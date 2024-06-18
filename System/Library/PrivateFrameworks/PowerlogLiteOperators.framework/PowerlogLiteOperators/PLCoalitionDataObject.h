@class NSString, NSValue;

@interface PLCoalitionDataObject : NSObject

@property (retain) NSString *bundleID;
@property (retain) NSString *launchdName;
@property (retain) NSValue *coalStruct;
@property unsigned long long coalitionID;
@property BOOL isUIKitApp;

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end

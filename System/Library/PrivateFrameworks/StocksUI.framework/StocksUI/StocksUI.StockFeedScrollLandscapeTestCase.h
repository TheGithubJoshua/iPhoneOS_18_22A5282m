@class NSString, NSArray;

@interface StocksUI.StockFeedScrollLandscapeTestCase : NSObject <SNTestCaseScroll, SNTestRunOptions> {
    void /* unknown type, empty encoding */ testName;
    void /* unknown type, empty encoding */ requiredCapabilities;
}

@property (nonatomic, readonly) NSString *testName;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ timeoutInSeconds;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ aggregate;
@property (nonatomic, readonly) NSArray *requiredCapabilities;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ iterations;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ offset;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ numberOfScreens;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ orientation;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ waitForCommitToFinish;

- (id)scrollViewWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end

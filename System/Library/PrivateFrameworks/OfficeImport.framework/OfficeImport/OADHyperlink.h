@class NSURL, NSString;

@interface OADHyperlink : NSObject {
    NSURL *mTargetLocation;
    int mTargetMode;
    NSString *mTargetFrame;
    NSString *mAction;
    NSString *mTooltip;
    NSString *mInvalidUrl;
}

@property (nonatomic) BOOL doEndSound;
@property (nonatomic) BOOL isVisited;
@property (nonatomic) BOOL doAddToHistory;

- (id)init;
- (id)action;
- (unsigned long long)hash;
- (void)setAction:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)setTargetFrame:(id)a0;
- (id)targetFrame;
- (void)setTargetMode:(int)a0;
- (int)targetMode;
- (void)setTargetLocation:(id)a0;
- (id)targetLocation;
- (id)tooltip;
- (void)setTooltip:(id)a0;
- (id)invalidUrl;
- (void)setInvalidUrl:(id)a0;

@end

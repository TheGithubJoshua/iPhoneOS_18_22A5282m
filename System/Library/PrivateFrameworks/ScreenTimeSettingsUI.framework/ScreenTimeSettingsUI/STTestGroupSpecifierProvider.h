@class NSTimer;

@interface STTestGroupSpecifierProvider : STUsageGroupSpecifierProvider {
    BOOL _isHidden;
}

@property (retain, nonatomic) NSTimer *timer;

- (void)timerFired:(id)a0;
- (void)setIsHidden:(BOOL)a0;
- (id)init;
- (BOOL)isHidden;
- (void).cxx_destruct;
- (void)dealloc;

@end

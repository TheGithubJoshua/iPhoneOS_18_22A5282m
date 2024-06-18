@class PDAnimationTarget;

@interface PDMediaNode : PDTimeNode {
    PDAnimationTarget *mTarget;
    BOOL mIsMuted;
    BOOL mIsShowWhenStopped;
    long long mNumberOfSlides;
    long long mVolume;
}

- (id)init;
- (id)target;
- (long long)volume;
- (void)setVolume:(long long)a0;
- (void).cxx_destruct;
- (void)setIsMuted:(BOOL)a0;
- (void)setTarget:(id)a0;
- (BOOL)isMuted;
- (BOOL)isShowWhenStopped;
- (long long)numberOfSlides;
- (void)setIsShowWhenStopped:(BOOL)a0;
- (void)setNumberOfSlides:(long long)a0;

@end

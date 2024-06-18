@class PDAnimationInfoData, PDMediaNode;

@interface PDAnimationInfo : NSObject {
    PDAnimationInfoData *mEntrance;
    PDAnimationInfoData *mExit;
}

@property (retain, nonatomic) PDAnimationInfoData *mediaData;
@property (retain, nonatomic) PDMediaNode *mediaNode;

- (void).cxx_destruct;
- (id)description;
- (id)exitData;
- (id)entranceData;
- (void)setEntranceData:(id)a0;
- (void)setExitData:(id)a0;

@end

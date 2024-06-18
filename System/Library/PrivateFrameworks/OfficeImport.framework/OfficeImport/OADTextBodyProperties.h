@class OADTextWarp, OADTextBodyAutoFit;

@interface OADTextBodyProperties : OADProperties {
    OADTextBodyAutoFit *mAutoFit;
    OADTextWarp *mTextWarp;
    float mTopInset;
    float mLeftInset;
    float mBottomInset;
    float mRightInset;
    float mRotation;
    float mColumnSpacing;
    unsigned short mColumnCount;
    unsigned short mTextBodyId;
    unsigned char mTextAnchorType;
    unsigned char mFlowType;
    unsigned char mWrapType;
    unsigned char mVerticalOverflowType;
    unsigned char mHorizontalOverflowType;
    unsigned char mRepectFirstLastParagraphSpacing : 1;
    unsigned char mIsUpright : 1;
    unsigned char mIsAnchorCenter : 1;
    unsigned char mIsLeftToRightColumns : 1;
    unsigned char mHasVerticalOverflowType : 1;
    unsigned char mHasHorizontalOverflowType : 1;
    unsigned char mHasTextBodyId : 1;
    unsigned char mHasFlowType : 1;
    unsigned char mHasWrapType : 1;
    unsigned char mHasTextAnchorType : 1;
    unsigned char mHasIsAnchorCenter : 1;
    unsigned char mHasIsUpright : 1;
    unsigned char mHasRotation : 1;
    unsigned char mHasColumnCount : 1;
    unsigned char mHasColumnSpacing : 1;
    unsigned char mHasIsLeftToRightColumns : 1;
    unsigned char mHasRepectFirstLastParagraphSpacing : 1;
    unsigned char mHasTopInset : 1;
    unsigned char mHasLeftInset : 1;
    unsigned char mHasRightInset : 1;
    unsigned char mHasBottomInset : 1;
}

+ (id)defaultProperties;
+ (id)defaultEscherWordArtProperties;

- (id)init;
- (void)setColumnCount:(int)a0;
- (float)leftInset;
- (float)rightInset;
- (int)columnCount;
- (float)rotation;
- (void)setLeftInset:(float)a0;
- (unsigned long long)hash;
- (void)setBottomInset:(float)a0;
- (id)initWithDefaults;
- (float)bottomInset;
- (void)setTopInset:(float)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)setRotation:(float)a0;
- (void)setRightInset:(float)a0;
- (float)topInset;
- (unsigned char)flowType;
- (void)setFlowType:(unsigned char)a0;
- (BOOL)hasRotation;
- (float)columnSpacing;
- (void)setColumnSpacing:(float)a0;
- (unsigned char)wrapType;
- (void)setWrapType:(unsigned char)a0;
- (void)setRespectLastFirstLineSpacing:(BOOL)a0;
- (id)autoFit;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)hasAutoFit;
- (BOOL)hasBottomInset;
- (BOOL)hasColumnCount;
- (BOOL)hasColumnSpacing;
- (BOOL)hasFlowType;
- (BOOL)hasHorizontalOverflowType;
- (BOOL)hasIsAnchorCenter;
- (BOOL)hasIsLeftToRightColumns;
- (BOOL)hasIsUpright;
- (BOOL)hasLeftInset;
- (BOOL)hasRespectLastFirstLineSpacing;
- (BOOL)hasRightInset;
- (BOOL)hasTextAnchorType;
- (BOOL)hasTextBodyId;
- (BOOL)hasTextWarp;
- (BOOL)hasTopInset;
- (BOOL)hasVerticalOverflowType;
- (BOOL)hasWrapType;
- (unsigned char)horizontalOverflowType;
- (BOOL)isAnchorCenter;
- (BOOL)isLeftToRightColumns;
- (BOOL)isUpright;
- (BOOL)isWarped;
- (void)removeUnnecessaryOverrides;
- (BOOL)respectLastFirstLineSpacing;
- (void)setAutoFit:(id)a0;
- (void)setHorizontalOverflowType:(unsigned char)a0;
- (void)setIsAnchorCenter:(BOOL)a0;
- (void)setIsLeftToRightColumns:(BOOL)a0;
- (void)setIsUpright:(BOOL)a0;
- (void)setTextAnchorType:(unsigned char)a0;
- (void)setTextBodyId:(int)a0;
- (void)setTextWarp:(id)a0;
- (void)setVerticalOverflowType:(unsigned char)a0;
- (unsigned char)textAnchorType;
- (int)textBodyId;
- (id)textWarp;
- (unsigned char)verticalOverflowType;

@end
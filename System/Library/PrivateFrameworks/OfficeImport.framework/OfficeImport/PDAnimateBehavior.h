@class PDAnimationTarget, NSMutableArray;

@interface PDAnimateBehavior : PDTimeNode {
    PDAnimationTarget *mTgtElement;
}

@property (retain, nonatomic) NSMutableArray *attributeNames;

- (id)init;
- (id)target;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)setTarget:(id)a0;

@end

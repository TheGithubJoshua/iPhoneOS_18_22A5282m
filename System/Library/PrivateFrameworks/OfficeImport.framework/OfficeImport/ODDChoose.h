@class NSMutableArray, ODDOtherwise;

@interface ODDChoose : ODDLayoutObject {
    NSMutableArray *mWhens;
    ODDOtherwise *mOtherwise;
}

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)otherwise;
- (void)addWhen:(id)a0;
- (void)setOtherwise:(id)a0;
- (id)whens;

@end

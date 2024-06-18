@interface WFCategoryJudgement : NSObject {
    float score;
    long long category;
}

+ (id)categoryJudgementWithCategory:(long long)a0 score:(float)a1;

- (void)setCategory:(long long)a0;
- (float)score;
- (void)setScore:(float)a0;
- (id)description;
- (long long)category;
- (long long)compareByScore:(id)a0;
- (long long)compareByCategory:(id)a0;

@end

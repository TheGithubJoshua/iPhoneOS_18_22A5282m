@class KVItemInfo, KVSpanInfo, NSArray;

@interface KVSpanMatchResult : NSObject <NSCopying> {
    KVItemInfo *_itemInfo;
    KVSpanInfo *_spanInfo;
    NSArray *_fieldMatches;
    float _score;
}

- (id)init;
- (float)score;
- (void)setScore:(float)a0;
- (unsigned long long)hash;
- (id)itemInfo;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fieldMatches;
- (id)spanInfo;
- (id)spanValue;
- (id)initWithItemInfo:(id)a0 spanInfo:(id)a1 fieldMatches:(id)a2;
- (id)initWithItemInfo:(id)a0 spanInfo:(id)a1 fieldMatches:(id)a2 score:(float)a3;
- (BOOL)isEqualToSpanMatchResult:(id)a0;

@end

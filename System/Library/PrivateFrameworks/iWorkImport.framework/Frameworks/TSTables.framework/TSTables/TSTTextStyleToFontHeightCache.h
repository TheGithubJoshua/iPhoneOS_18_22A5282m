@class NSMutableArray, TSUPointerKeyDictionary;

@interface TSTTextStyleToFontHeightCache : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (retain, nonatomic) NSMutableArray *textStyleReferences;
@property (retain, nonatomic) TSUPointerKeyDictionary *textStyleToFontHeight;

- (id)init;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (void)dealloc;
- (double)heightForTextStyle:(id)a0;
- (void)setHeight:(double)a0 forTextStyle:(id)a1;

@end

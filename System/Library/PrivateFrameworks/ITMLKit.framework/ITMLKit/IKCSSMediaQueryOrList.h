@class IKMutableArray;

@interface IKCSSMediaQueryOrList : IKCSSMediaQueryList {
    IKMutableArray *_queryList;
}

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)evaluate;
- (unsigned long long)count;
- (void)addSubQueryList:(id)a0;
- (id)expressionAsString;
- (id)subQueryAtIndex:(unsigned long long)a0;
- (id)subQueryList;

@end

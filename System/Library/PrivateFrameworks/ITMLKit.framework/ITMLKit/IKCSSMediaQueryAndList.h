@class NSString, IKMutableArray;

@interface IKCSSMediaQueryAndList : IKCSSMediaQueryList {
    IKMutableArray *_queryList;
}

@property (retain, nonatomic) NSString *type;
@property BOOL negated;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)evaluate;
- (unsigned long long)count;
- (void)addQuery:(id)a0;
- (id)expressionAsString;
- (id)expressionList;
- (id)subQueryAtIndex:(unsigned long long)a0;

@end

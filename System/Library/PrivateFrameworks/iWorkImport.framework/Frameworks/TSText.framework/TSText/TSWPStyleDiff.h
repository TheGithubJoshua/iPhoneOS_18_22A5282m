@class TSSStylePropertyChangeSet, TSSStyle;

@interface TSWPStyleDiff : TSSStyleDiff {
    BOOL _definedChangeSet;
    BOOL _definedStyle;
}

@property (retain, nonatomic) TSSStylePropertyChangeSet *previouslyAppliedChangeSet;
@property (retain, nonatomic) TSSStylePropertyChangeSet *changeSet;
@property (retain, nonatomic) TSSStyle *style;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithContext:(id)a0 style:(id)a1;
- (void)saveToArchiver:(id)a0;
- (void)didInitFromSOS;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)changedPropertyNames:(id)a0;
- (id)initWithContext:(id)a0 changeSet:(id)a1;
- (BOOL)isEqualToStyleDiff:(id)a0;
- (id)styleDiffForTable:(unsigned long long)a0 storage:(id)a1 currentObject:(id)a2;

@end

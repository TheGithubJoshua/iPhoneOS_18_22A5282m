@class NSString;

@interface PGGraphHighlightChange : PGGraphChange

@property (readonly, nonatomic) NSString *highlightUUID;
@property (readonly, nonatomic) unsigned long long updateTypes;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)type;
- (id)initWithHighlightUUID:(id)a0 updateTypes:(unsigned long long)a1;
- (void)mergeChange:(id)a0;

@end

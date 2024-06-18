@interface MSVLRUDictionaryNode : NSObject <NSCopying>

@property (readonly, nonatomic) id key;
@property (retain, nonatomic) id object;
@property (weak, nonatomic) MSVLRUDictionaryNode *next;
@property (weak, nonatomic) MSVLRUDictionaryNode *prev;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKey:(id)a0 object:(id)a1;

@end

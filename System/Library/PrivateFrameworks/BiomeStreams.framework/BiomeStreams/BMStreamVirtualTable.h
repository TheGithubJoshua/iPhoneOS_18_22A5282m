@class BMSQLSchema;

@interface BMStreamVirtualTable : NSObject

@property (readonly, nonatomic) BMSQLSchema *schema;
@property (readonly, copy, nonatomic) id /* block */ publisherBlock;

+ (id)new;

- (id)publisher;
- (id)init;
- (id)initWithStream:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSchema:(id)a0 publisherBlock:(id /* block */)a1;

@end

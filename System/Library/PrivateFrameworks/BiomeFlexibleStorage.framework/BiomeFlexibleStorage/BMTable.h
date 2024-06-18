@class NSArray, BMTableSchema;

@interface BMTable : NSObject

@property (copy, nonatomic) NSArray *rows;
@property (retain, nonatomic) BMTableSchema *schema;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRows:(id)a0 schema:(id)a1;

@end

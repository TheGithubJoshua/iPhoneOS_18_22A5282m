@interface IndexMove : NSObject

@property (readonly, nonatomic) long long indexBeforeMove;
@property (readonly, nonatomic) long long indexAfterMove;
@property (readonly, nonatomic, getter=isModified) BOOL modified;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithIndexBeforeMove:(long long)a0 indexAfterMove:(long long)a1 modified:(BOOL)a2;
- (BOOL)isEqualToMove:(id)a0;

@end

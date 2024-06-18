@class NSArray, NSMutableArray;

@interface SRUIFStack : NSObject <NSCopying>

@property (readonly, nonatomic, getter=_elements) NSMutableArray *elements;
@property (readonly, nonatomic) id topObject;
@property (readonly, copy, nonatomic) NSArray *allObjects;

- (id)init;
- (id)copy;
- (id)initWithArray:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStack:(id)a0;

@end

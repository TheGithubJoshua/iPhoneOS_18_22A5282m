@class CKQuadTreeNode;

@interface CKQuadTree : NSObject

@property (readonly, nonatomic) CKQuadTreeNode *rootNode;

- (id)init;
- (id)initWithPoints:(id)a0;
- (void).cxx_destruct;
- (void)visit:(id /* block */)a0;

@end

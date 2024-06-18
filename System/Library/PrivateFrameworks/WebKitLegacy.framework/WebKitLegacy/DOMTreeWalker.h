@class DOMNode;
@protocol DOMNodeFilter;

@interface DOMTreeWalker : DOMObject

@property (readonly) DOMNode *root;
@property (readonly) unsigned int whatToShow;
@property (readonly) id<DOMNodeFilter> filter;
@property (readonly) BOOL expandEntityReferences;
@property (retain) DOMNode *currentNode;

- (id)nextNode;
- (id)previousNode;
- (void)dealloc;
- (id)previousSibling;
- (id)firstChild;
- (id)lastChild;
- (id)parentNode;
- (id)nextSibling;

@end

@class NSURL, LSAppLink;

@interface _UITextInteractableLink : _UITextInteractableItem

@property (retain, nonatomic) NSURL *link;
@property (retain, nonatomic) LSAppLink *appLink;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isLink;

@end

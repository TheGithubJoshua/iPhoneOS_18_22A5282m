@class UICollectionViewDropProposal, NSIndexPath;

@interface _UIDragDestinationControllerDropProposalState : NSObject

@property (nonatomic) BOOL didDrop;
@property (retain, nonatomic) UICollectionViewDropProposal *proposal;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) NSIndexPath *effectiveIndexPath;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)_hasDropActionTarget;
- (void)didPerformDrop;
- (void)updateFromDropProposal:(id)a0;

@end
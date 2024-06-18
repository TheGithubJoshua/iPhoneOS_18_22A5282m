@interface FPDExtensionIndexer : FPDDomainIndexer

- (void)dropIndexForDomainRemoval:(BOOL)a0 completion:(id /* block */)a1;
- (void)indexOneBatchWithCompletionHandler:(id /* block */)a0;

@end

@class BRContainer;

@interface BRUploadAllFilesOperation : BROperation {
    BRContainer *_container;
}

@property (copy) id /* block */ uploadAllFilesCompletion;

- (void)main;
- (id)init;
- (id)initWithContainer:(id)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end

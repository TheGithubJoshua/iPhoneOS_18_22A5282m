@class NSURL, NSString;

@interface SBIconModelPropertyListFileStore : NSObject <SBIconModelStore, BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSURL *currentIconStateURL;
@property (readonly, copy, nonatomic) NSURL *desiredIconStateURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)saveCurrentIconState:(id)a0 error:(id *)a1;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)saveDesiredIconState:(id)a0 error:(id *)a1;
- (BOOL)deleteCurrentIconStateWithOptions:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_delete:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)succinctDescription;
- (id)initWithIconStateURL:(id)a0 desiredIconStateURL:(id)a1;
- (id)_load:(id)a0 error:(id *)a1;
- (id)loadDesiredIconState:(id *)a0;
- (BOOL)_save:(id)a0 url:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)deleteDesiredIconStateWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)loadCurrentIconState:(id *)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;

@end

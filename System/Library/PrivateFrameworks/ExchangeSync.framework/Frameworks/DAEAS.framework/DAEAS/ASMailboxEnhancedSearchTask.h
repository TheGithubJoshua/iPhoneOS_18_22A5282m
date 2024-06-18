@class NSString;

@interface ASMailboxEnhancedSearchTask : ASSearchTask {
    NSString *_searchId;
}

- (id)requestBody;
- (void).cxx_destruct;
- (id)initWithQuery:(id)a0;
- (void)finishWithError:(id)a0;
- (void)performTask;
- (BOOL)processContext:(id)a0;
- (void)_appendSearchOptions:(id)a0;
- (void)_appendSearchQuery:(id)a0;
- (int)commandCode;
- (BOOL)getTopLevelToken:(char *)a0 outStatusCodePage:(char *)a1 outStatusToken:(char *)a2;
- (id)replacementObjectForEmailItem:(id)a0;
- (BOOL)requiresEASVersionInformaton;

@end

@class NSObject;
@protocol OS_dispatch_group, CalDAVAccountPropertyRefreshDelegate;

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation {
    NSObject<OS_dispatch_group> *_defaultAlarmGroup;
}

@property (nonatomic) id<CalDAVAccountPropertyRefreshDelegate> delegate;
@property (nonatomic) BOOL fetchPrincipalSearchProperties;

- (void)_finishCalDAVAccountPropertyRefreshOperationWithError:(id)a0;
- (id)initWithPrincipal:(id)a0;
- (void)propFindTask:(id)a0 parsedResponses:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)_copyHomePropertiesPropFindElements;
- (void)getAccountPropertiesTask:(id)a0 completedWithError:(id)a1;
- (void)sendLocallyChangedPropertiesIfNeeded;
- (BOOL)shouldKeepDefaultAlarmError:(id)a0;
- (id)propPatchForProperty:(id)a0 value:(id)a1;
- (void)_refreshDefaultAlarms;
- (void)_reallyRefreshProperties;
- (void)refreshProperties;
- (BOOL)shouldRefreshDefaultAlarms;

@end

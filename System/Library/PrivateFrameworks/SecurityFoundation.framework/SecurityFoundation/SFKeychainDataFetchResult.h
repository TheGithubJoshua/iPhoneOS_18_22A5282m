@class SFKeychainData;

@interface SFKeychainDataFetchResult : _SFKeychainFetchResult {
    id _dataFetchResult;
}

@property (readonly) SFKeychainData *value;

- (void)fetchValueWithAuthenticationContext:(id)a0 resultHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end

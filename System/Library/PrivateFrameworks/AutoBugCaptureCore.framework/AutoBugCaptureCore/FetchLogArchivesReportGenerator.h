@interface FetchLogArchivesReportGenerator : NetworkDiagnosticsReportGenerator

- (void)setBaseDuration:(unsigned long long)a0 maximumSize:(unsigned long long)a1;
- (void)setDefaults;
- (void)setTTLDuration:(unsigned long long)a0 maximumSize:(unsigned long long)a1;
- (id)initWithQueue:(id)a0;
- (void)setHighVolumeLoggersDuration:(unsigned long long)a0 maximumSize:(unsigned long long)a1;

@end

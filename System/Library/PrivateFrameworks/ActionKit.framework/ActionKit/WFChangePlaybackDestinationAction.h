@interface WFChangePlaybackDestinationAction : WFAction

- (id)routeDescriptor;
- (long long)operation;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)subcategoryForCategory:(id)a0;
- (id)errorFromRoutePickerError:(id)a0;
- (id)errorUserInfoForRoutePickerErrorCode:(long long)a0;

@end

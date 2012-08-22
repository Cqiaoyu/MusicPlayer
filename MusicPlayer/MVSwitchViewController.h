//
//  MVSwitchViewController.h
//  MusicPlayer
//
//  Created by Bill on 12-8-21.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YCSearchController.h"

@interface MVSwitchViewController : UIViewController<UITableViewDataSource,UITableViewDelegate,YCSearchControllerDelegete>{
    UITableView *mvTableView;
    NSMutableArray *tableViewArray;
    NSMutableArray *searchArray;
    IBOutlet UINavigationBar *navigationBar;
    
    UISearchDisplayController *searchDisplayController;
    BOOL displaySearch;
}
@property (nonatomic, retain) YCSearchController *searchController;

-(void)segmentedControlChanged:(UISegmentedControl*)segmentedControl;

@end

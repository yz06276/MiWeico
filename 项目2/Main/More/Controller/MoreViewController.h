//
//  MoreViewController.h
//  项目2
//
//  Created by ios on 15/8/19.
//  Copyright (c) 2015年 ios. All rights reserved.
//

#import "BaseViewController.h"

@interface MoreViewController : BaseViewController<UITableViewDataSource,UITableViewDelegate>
{
    UITableView *_mainTableViewOnMore;
}

@end

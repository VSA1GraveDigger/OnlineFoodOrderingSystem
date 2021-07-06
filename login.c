// Function to Logging in the users
char t_email[100],t_password1[100];
void login()
{
    printf("\n\nLOGIN\n\n");
    printf("\nEnter Your Email\t");
    scanf("%s", t_email);
  
    printf("Enter Your Password\t");
    scanf("%s", t_password1);
    int email_iter,search_choice;
  
    for (email_iter = 0; email_iter < 100; email_iter++) {
        // Check whether the input email
        // is already existed or not
        if (!strcmp(s[email_iter].email, t_email)) {
            // Check whether the password
            // is matched with email or not
            if (!strcmp(s[email_iter].password, t_password1)) {
                printf("\n\nWelcome %s, ");
                printf("Your are successfully ");
                printf("logged in\n\nWe Provide ");
                printf("two ways of search\n1) ");
                printf("Search By Hotels\n2) ");
                printf("Search by Food\n3) ");
                printf("Exit\n\nPlease Enter");
                printf("your choice\t", s[email_iter].uname);
                scanf("%d", &search_choice);
  
                // Get the input whether
                // the user are going to search
                // /Order by hotels or search/
                // order by food
                switch (search_choice) {
                case 1: {
                    //search_by_hotels();
                    break;
                }
                case 2: {
                    //search_by_food();
                    break;
                }
                case 3: {
                    exit(1);
                }
                default: {
                    printf("Please Enter ");
                    printf("the valid choice\n\n");
                    break;
                }
                }
                break;
            }
            else {
                printf("\n\nInvalid Password! ");
                printf("Please Enter the ");
                printf("correct password\n\n");
                main();
                break;
            }
        }
        else {
            printf("\n\nAccount doesn't ");
            printf("exist, Please signup!!\n\n");
            main();
            break;
        }
    }
}
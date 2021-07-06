void signup();
void login();
int validation();
int main();
void account_check();
void search_by_hotels();
void hotel_initialize();
void cart();

int flag = 1, iter,email_iter, j = 0, count = 0, caps = 0;
int small = 0, special = 0, numbers = 0;
int success = 0, val, choice,i,j;
char t_name[100], t_newpassword[100];
char t_confirmpassword[100], t_email[100];
char t_phno[100];
  
int t_age, total = 0, food_choice, n;
int hotel_choice, search_choice, confirm;
int ch, food, hotel_id;
// Structure to store the details
typedef struct details {
    char uname[100];
    int age;
    char password[100];
    char email[100];
    char mobile[10];
}detail;
detail s[100];
// Structure to store the hotels

struct hotels {
    char hotel[100];
    char first_food[20];
    char second_food[20];
    char third_food[20];
    char fourth_food[25];
    int first, second, third, fourth;
};

struct hotels m[5];

